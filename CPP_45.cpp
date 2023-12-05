Solve the following code contest problem: CPP/45. Problem description: Complete the following code given the task description and function signature..
Currently, the code is 
```
float triangle_area(float a, float h) {
    return (a * h) / 2;
}
```
Modify the code as  The issue is with the backticks (```) used to enclose the code. In C++, backticks are used for other purposes, such as escaping special characters or creating raw string literals. To fix the code, remove the backticks and replace them with regular quotes (") or parentheses () around the code block.

Here's an example of how you can modify the code to fix the issue:
```
float triangle_area(float a, float h) {
    return (a * h) / 2;
}

int main() {
    assert (abs(triangle_area(10, 8) - 40.0)<1e-4);
    return 0;
}