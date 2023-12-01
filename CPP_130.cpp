#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
   if(a.size() != b.size()){
       return false;
   }
   for(int i=0; i<a.size(); i++){
       if(a[i] != b[i]){
           return false;
       }
   }
   return true;
}

std::vector<int> tri(int n){
    std::vector<int> sequence;
    sequence.push_back(3); // Adding the first element of the sequence
    if(n > 0){
        sequence.push_back(1 + n / 2); // Adding the second element of the sequence
    }
    if(n > 1){
        sequence.push_back(sequence[0] + sequence[1] + sequence[2]); // Adding the third element of the sequence
    }
    if(n > 2){
        for(int i = 3; i <= n; i++){
            if(i % 2 == 0){
                sequence.push_back(1 + i / 2); // Adding even indexed elements
            } else {
                sequence.push_back(sequence[i - 1] + sequence[i - 2] + sequence[i - 3]); // Adding odd indexed elements
            }
        }
    }
    return sequence;
}

int main() {
    // Test the tri function and issame function
    std::vector<int> result = tri(10);
    std::vector<int> expected = {3, 6, 10, 8, 13, 21, 18, 30, 49, 63, 102};
    if(issame(result, expected)){
        // Output the result
        for(int i=0; i<result.size(); i++) {
            std::cout << result[i] << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Test case failed." << std::endl;
    }
    
    return 0;
}