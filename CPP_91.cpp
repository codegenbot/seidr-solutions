#include <string>

int main() {
    string S;
    cin >> S;
    int result = is_bored(S);
    cout << result << endl;
}

int is_bored(string S){
    int count = 0;
    string boredom = "I";
    size_t pos = 0;

    while((pos = S.find(".", pos)) != string::npos ||
          (pos = S.find("?", pos)) != string::npos ||
          (pos = S.find("!", pos)) != string::npos){
        if(S.substr(0, boredom.size()).compare(boredom) == 0)
            count++;
        pos += 1;
    }

    return count;
}