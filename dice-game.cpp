cpp
double probability(int n, int m) {
    double total = (n * 1.0) * (m * 1.0);
    double petersTotal = (n * 1.0);
    double colinTotal = (m * 1.0);
    
    double probability = 0;
    
    for(int i = colinTotal + 1; i <= petersTotal + colinTotal - 1; i++) {
        probability += (1.0 / total);
    }
    
    return probability;
}