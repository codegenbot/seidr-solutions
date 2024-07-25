#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b){
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    for (int num : arr) {
        string str = to_string(num);
        if (str.length() == 1) {
            switch (num) {
                case 1:
                    result.push_back("One");
                    break;
                case 2:
                    result.push_back("Two");
                    break;
                case 3:
                    result.push_back("Three");
                    break;
                case 4:
                    result.push_back("Four");
                    break;
                case 5:
                    result.push_back("Five");
                    break;
                case 6:
                    result.push_back("Six");
                    break;
                case 7:
                    result.push_back("Seven");
                    break;
                case 8:
                    result.push_back("Eight");
                    break;
                case 9:
                    result.push_back("Nine");
            }
        } else {
            string temp = "Zero";
            if (num >= 10 && num <= 19) {
                switch (num) {
                    case 10:
                        temp = "Ten";
                        break;
                    case 11:
                        temp = "Eleven";
                        break;
                    case 12:
                        temp = "Twelve";
                        break;
                    case 13:
                        temp = "Thirteen";
                        break;
                    case 14:
                        temp = "Fourteen";
                        break;
                    case 15:
                        temp = "Fifteen";
                        break;
                    case 16:
                        temp = "Sixteen";
                        break;
                    case 17:
                        temp = "Seventeen";
                        break;
                    case 18:
                        temp = "Eighteen";
                        break;
                    case 19:
                        temp = "Nineteen";
                }
            } else if (num >= 20 && num <= 99) {
                string tens = "";
                switch (num / 10) {
                    case 2:
                        tens = "Twenty";
                        break;
                    case 3:
                        tens = "Thirty";
                        break;
                    case 4:
                        tens = "Forty";
                        break;
                    case 5:
                        tens = "Fifty";
                        break;
                    case 6:
                        tens = "Sixty";
                        break;
                    case 7:
                        tens = "Seventy";
                        break;
                    case 8:
                        tens = "Eighty";
                        break;
                    case 9:
                        tens = "Ninety";
                }
                if (num % 10 != 0) {
                    temp += "-" + to_string(num % 10);
                } else {
                    temp = tens;
                }
            }

            result.push_back(temp);
        }
    }
    
    return result;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<string> res = by_length(arr);
    for (const string& s : res) {
        cout << s << endl;
    }
    // Don't forget to return something from your main function
    return 0;
}