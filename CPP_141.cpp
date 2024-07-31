#include <string>
using namespace std;

string file_name_check(string file_name) {
    int digitsCount = 0;
    int dotPos = -1;

    for (int i = 0; i < file_name.size(); i++) {
        if (file_name[i] >= '0' && file_name[i] <= '9') {
            digitsCount++;
        } else if (file_name[i] == '.') {
            if (dotPos != -1) {
                return "No";
            }
            dotPos = i;
        }
    }

    if (digitsCount > 3 || dotPos == -1 || dotPos == 0 || dotPos == file_name.size() - 1) {
        return "No";
    }

    string beforeDot = file_name.substr(0, dotPos);
    string afterDot = file_name.substr(dotPos + 1);

    if (!isalpha(beforeDot[0]) || !(afterDot == "txt" || afterDot == "exe" || afterDot == "dll")) {
        return "No";
    }

    return "Yes";
}