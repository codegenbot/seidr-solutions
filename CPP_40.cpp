#include <cassert>

bool triples_sum_to_zero(const int* l, int n);

int main() {
    int arr[] = {100, 3, 5, -100};
    assert(triples_sum_to_zero(arr, sizeof(arr) / sizeof(arr[0])) == false);
    return 0;
}