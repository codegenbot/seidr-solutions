Solve the following code contest problem: dice-game. Problem description: Peter has an n-sided die and Colin has an m-sided die. If they both roll their dice at the same time, return the probability that Peter rolls strictly higher than Colin..
Currently, the code is 
```
def get_probability(n, m):
    return 1 / (m * n)
``` 
Modify the code as  To fix the code, you need to modify the formula to calculate the probability of Peter rolling strictly higher than Colin. The current formula is incorrect because it only calculates the probability of Peter rolling higher or equal to Colin.

Here's a corrected version of the function:
```
def get_probability(n, m):
    return (n - 1) / (m * n)
```
This formula calculates the number of possible outcomes where Peter rolls strictly higher than Colin and divides it by the total number of possible outcomes. This gives us the probability that Peter rolls strictly higher than Colin..
You must only return correct code. Remove any triple quotes, language name or explanations. 