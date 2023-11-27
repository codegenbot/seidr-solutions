#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()) return false;
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> remove_duplicates(std::vector<int> l){
    std::sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    return l;
}

std::vector<int> expected_output = {0, 2, 3, 5, 9, 123};

std::vector<int> output = remove_duplicates({5, 3, 5, 2, 3, 3, 9, 0, 123});

assert(issame(remove_duplicates(output), expected_output));

std::cout << "Output is correct" << std::endl;

return 0;