#include <vector>
#include <initializer_list>

int main() {
    std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    
    bool hasCloseElements = false;
    float minDiff = 10.0f;

    for(int i=0; i<a.size()-1; i++) {
        if (abs(a[i]-a[i+1]) < minDiff) {
            minDiff = abs(a[i]-a[i+1]);
            hasCloseElements = true;
        }
    }

    std::cout << "Has close elements: " << (hasCloseElements ? "Yes" : "No") << std::endl;

    return 0;
}