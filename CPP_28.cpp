using namespace std;

std::string concatenate(vector<string> strings){
    std::string result = "";
    for (const auto& str : strings) {
        result += str;
    }
    return result;