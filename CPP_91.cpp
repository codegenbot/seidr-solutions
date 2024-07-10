```
#include <string>

int main() {
    string S;
    cout << "Enter a sentence: ";
    cin >> S;
    int result = is_bored(S);
    cout << "Boredom count: " << result << endl;
    return 0;
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