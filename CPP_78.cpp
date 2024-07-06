using namespace std;

int hex_key(const string& num) {
    int count = 0;
    for (char c : num) {
        if (!isxdigit(c)) { 
            count++;
        }
    }
    return count;