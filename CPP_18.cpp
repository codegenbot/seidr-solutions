```
#include <string>

int main() {
    string str = "Hello World, Hello Android, Hello C++";
    string substring = "Hello";
    int count = how_many_times(str, substring);
    cout << "The string \"Hello\" appears " << count << " times in the given sentence." << endl;
    return 0;
}

int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring, pos)) != string::npos) {
        ++count;
        pos += substring.size();
    }
    return count;
}