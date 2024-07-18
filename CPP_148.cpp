#include <vector>
#include <cassert>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
   return a.empty() && b.empty();
}

int main(){
   assert(issame(std::vector<std::string>{"Jupiter", "Makemake"}, std::vector<std::string>{}));
}