using namespace std;

std::vector<std::string> by_length(std::vector<int> arr){
    std::vector<std::string> temp;
    for(int i: arr){
        if(i >= 1 && i <= 9)temp.push_back(numToName[i]);
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    std::vector<std::string> result;
    std::map<int, std::string> numToName = {{1,"One"}, {2,"Two"}, {3,"Three"}, {4,"Four"}, {5,"Five"}, {6,"Six"}, {7,"Seven"}, {8,"Eight"}, {9,"Nine"}; 
    for(int i: temp){
        result.push_back(numToName[i]);
    }
    return result;
}