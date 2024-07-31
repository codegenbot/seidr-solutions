#include <vector>
#include <string>

int main() {
    int result = Strongest_Extension("Sp", {"671235", "Bb"});
    assert(result == ("Sp." + "671235"));
    return 0;
}