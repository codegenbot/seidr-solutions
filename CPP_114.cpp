#include <vector>
#include <climits>
#include <cassert>
#pragma comment(linker,"/STACK:10240")

int main(int argc, char** argv) {
    assert(minSubArraySum({1, -1}) == -1);
    return 0;
}