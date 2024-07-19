#include <iostream>
#include <string>

int how_many_times(string s, string sub);

int main() {
    string s, sub;
    cin >> s >> sub; 
    cout << how_many_times(s, sub);
    return 0;
}

int how_many_times(string s, string sub) {
    int count = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s.substr(i, sub.length()).compare(sub) == 0)
            count++;
    }
    return count;
}