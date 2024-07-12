using namespace std;

int sum_squares(vector<int> numbers) {
    int total = 0;
    for (int i = 0; i < numbers.size(); i++) {
        total += numbers[i] * numbers[i];
    }
    return total;
}