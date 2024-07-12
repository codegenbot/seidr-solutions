#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
  return a == b;
}

int main() {
  assert(issame(std::vector<std::string>{"Jupiter", "Makemake"}, std::vector<std::string>{}));
  return 0;
}