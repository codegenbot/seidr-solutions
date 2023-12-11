Solve the following code contest problem: Python/159. Problem description: Complete the following code given the task description and function signature..
Currently, the code is 
```
def eat(number, need, remaining):
    total_eaten = number + need
    carrots_left = max(0, remaining - need)
    return [total_eaten], [carrots_left]
``` 
Modify the code as  The issue is that the function `eat` returns two values, but the assert statement only checks for one value. To fix this, you can change the assert statement to check for both values:
```
assert eat(4, 5, 1) == [5, 0], "Error"
```.
You must only return correct code. Remove any triple quotes, language name or explanations.