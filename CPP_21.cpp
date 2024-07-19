#include <vector>
#include <cassert>

bool std::vector<float>::issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}
bool std::vector<float>::rescale_to_unit(std::vector<float>& v) {
    // implementation of rescale_to_unit function
}

int main() {
   std::vector<float> v1 = {1.0, 2.0, 3.0};
   std::vector<float> v2 = {1.0, 2.0, 3.0};
   if(issame(v1, v2)){
       rescale_to_unit(v1);
   }
   return 0;
}