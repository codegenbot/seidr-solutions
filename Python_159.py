Solve the following code contest problem: Python/159. Problem description: Complete the following code given the task description and function signature..
Currently, the code is 
```
def eat(number, need):
    total_eaten = number + need
    carrots_left = max(0, remaining - need)
    return [total_eaten, carrots_left]
```
Modify the code as The issue is with the indentation of the function `eat()`. The function definition should be indented to the same level as the rest of the code. Also, there is an extra closing parenthesis on the last line that needs to be removed.

Here's the corrected code:
```
def eat(number, need):
    total_eaten = number + need
    carrots_left = max(0, remaining - need)
    return [total_eaten, carrots_left]
```
You must only return correct code. Remove any triple quotes, language name or explanations.