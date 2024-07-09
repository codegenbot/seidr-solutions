#include <string>
using namespace std;

bool is_happy(string s);

int main() {
    assert(is_happy("iopaxioi") == false );
}

bool is_happy(string s) {