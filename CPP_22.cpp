#include <iostream>
#include <list>
#include <vector>
#include <any>

bool issame(std::vector<int> a,std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int num = std::any_cast<int>(value);
            bool flag = false;
            for(const auto& i: result){
                if(i==num)flag=true;break;
            }
            if(!flag)result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert (issame(filter_integers({3, 3, 3, 'a', 'b'}), {1, 2, 3}) == false);
}