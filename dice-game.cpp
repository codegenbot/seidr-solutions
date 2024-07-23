#include <initializer_list>

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;

    for(int i = 1; i <= std::min(n, m); i++) {
        if(i < m) {
            p += (n - i) / total;
        }
    }

    return p;
}

int main(int argc, char** argv) { return diceGame(6, 6); }