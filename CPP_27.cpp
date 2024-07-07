#include <string>
#include <cctype>

std::string flip_case(std::string str) {
    std::string result = str; 
    for (char & c : result) { 
        c = std::toupper(c); 
        if (std::islower(c)) {
            c = std::tolower(c); 
        }
    }
    return result;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "tHeSe ViOlEnT dElIgHtS hAvE vIoLeNt EnDs");
    return 0;
}