#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    vector<string> result;
    map<int, string> numberNames = {{1, "One"}, {2, "Two"}, {3, "Three"},
                                      {4, "Four"}, {5, "Five"}, {6, "Six"},
                                      {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            int count = 0;
            string str;
            if(num == 4 || num == 6 || num == 7)
                str = numberNames[num];
            else
                for(int i=0; i<num; i++) {
                    str += "Zero";
                    count++;
                }
            if(count > 1) {
                result.push_back(str + "s");
            }else{
                result.push_back(str);
            }
        }
    }

    return result;
}