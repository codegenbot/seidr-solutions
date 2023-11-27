#include <string>

int is_bored(std::string S){
    int count = 0;
    bool is_sentence_start = true;
    
    for(int i=0; i<S.length(); i++){
        if(S[i] == 'I' && (i==0 || S[i-1] == '.' || S[i-1] == '?' || S[i-1] == '!')){
            is_sentence_start = true;
        }
        else if(is_sentence_start && (S[i] == '.' || S[i] == '?' || S[i] == '!')){
            count++;
            is_sentence_start = false;
        }
    }
    
    return count;
}

int main() {
    // Test cases
    std::string sentence1 = "I am bored.";
    std::string sentence2 = "Are you bored?";
    std::string sentence3 = "This is not a sentence.";
    
    int result1 = is_bored(sentence1);
    int result2 = is_bored(sentence2);
    int result3 = is_bored(sentence3);
    
    // Print the results
    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;
    std::cout << "Result 3: " << result3 << std::endl;
    
    return 0;
}