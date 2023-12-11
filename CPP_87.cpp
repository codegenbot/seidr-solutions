```
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Allocator {
public:
    typedef T value_type;
    typedef void* pointer;
    typedef const void* const_pointer;
    typedef void* reference;
    typedef const void* const_reference;
    typedef std::size_t size_type;
    typedef std::ptrdiff_t difference_type;

    template <typename U>
    struct rebind {
        typedef Allocator<U> other;
    };

    pointer allocate(size_type n, const void* hint = 0) {
        return ::operator new(n * sizeof(T));
    }

    void deallocate(pointer p, size_type n) {
        ::operator delete(p);
    }
};

std::vector<std::vector<int>, Allocator<std::vector<int>>> get_row(std::vector<std::vector<int>> lst, int x) {
    std::vector<std::vector<int>, Allocator<std::vector<int>>> result;
    for (int i = 0; i < lst.size(); i++) {
        for (int j = 0; j < lst[i].size(); j++) {
            if (lst[i][j] == x) {
                result.push_back(std::initializer_list<int>{i, j});
            }
        }
    }
    return result;
}
```