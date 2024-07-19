#include <cassert>
#include <vector>
#include <string>

std::string Strongest_Extension(const std::string& class_name, const std::vector<std::string>& extensions) {
    for (const auto& extension : extensions) {
        if (!extension.empty()) {
            return class_name + "." + extension;
        }
    }
    return class_name;
}

int main(){
    string class_name = "My";
    vector<string> extensions({"Java", "Python", "C++"}); 
    cout << Strongest_Extension(class_name, extensions) << endl;

    assert (Strongest_Extension("Sp", {"671235", "Bb"}) == string("Sp.671235"));

    return 0;
}