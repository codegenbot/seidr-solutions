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
    std::string input;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, input);
    
    int result = is_bored(input);
    std::cout << "Number of sentences starting with 'I': " << result << std::endl;
    
    return 0;
}