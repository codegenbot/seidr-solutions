```cpp
vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    std::sort(result.begin(), result.end(), 
              [](const string& a, const string& b) {
                  if (a.length() != b.length()) {
                      return a.length() < b.length();
                  } else {
                      return a < b;
                  }
              });
    return result;
}

bool issame(vector<string> a,vector<string>b){
    return a==b;
}
int main() {
    vector<string> lst = {"aaaa", "bbbb", "dd", "cc"};
    vector<string> result = sorted_list_sum(lst);
    assert (issame(result , {"cc","dd","aaaa","bbbb"})); 
    return 0;
}