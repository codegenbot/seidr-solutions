#include<iostream>

bool move_one_ball(std::vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true;
    
    for (int i = 0; i < n; ++i) {
        bool swapped = false;
        for (int j = 0; j < n - 1; ++j) {
            if (arr[j] > arr[n - 1]) {
                int temp = arr[j];
                arr[j] = arr[n - 1];
                arr[n - 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) return true;
    }
    return false;
}

int main() {
    std::vector<int> balls;
    int numBalls;
    std::cout << "Enter the number of balls: ";
    std::cin >> numBalls;

    for(int i=0; i<numBalls; ++i) {
        int ball;
        std::cout << "Enter the position of ball " << i+1 << ": ";
        std::cin >> ball;
        balls.push_back(ball);
    }

    if(move_one_ball(balls)) {
        std::cout << "After one move, all the balls will be in order." << std::endl;
    } else {
        std::cout << "You need to make more than one move to get all the balls in order." << std::endl;
    }
    
    return 0;
}