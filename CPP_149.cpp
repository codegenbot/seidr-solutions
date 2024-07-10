#include <vector>
#include <string>

bool issame(vector<string> a, vector<string>b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

struct Result {
    std::string str;
    int sum;
};

Result process(vector<string> input) {
    vector<string> a(input.begin(), input.end());
    sort(a.begin(), a.end());
    
    if(issame(a, {"apple", "banana"})) {
        return { "same", 0 };
    } else if(issame(a, {"banana", "apple"})) {
        return { "same", 1 };
    } else {
        Result result = {"different", 2};
        for(int i = 0; i < a.size(); i++) {
            if(a[i] == "apple") {
                result.sum += 0;
            } else if(a[i] == "banana") {
                result.sum += 1;
            }
        }
        return result;
    }
}