```
def eat(number, need, remaining):
    if remaining <= 0:
        left = 0
        return [total, left]
    
    total = number + need
    left = max(total - remaining, 0)
    return [total, left]
```

Your code has an indentation error on line 1, which is causing the `SyntaxError`. To fix it, you can try the following steps:

1. Check your indentation levels: Make sure that the lines of code inside the function definitions are indented correctly. Each line should have the same number of spaces (usually four) as the previous line.
2. Remove any extra characters or lines of code: Look for any unnecessary characters or lines of code that may be causing the error.
3. Check your parentheses and brackets: Make sure that you have properly closed all parentheses and brackets in your code. This can sometimes cause indentation errors.
4. Use an IDE or text editor with syntax highlighting: Using a tool like PyCharm, Visual Studio Code, or Sublime Text with syntax highlighting can help you catch these types of errors more easily.

By following these steps, you should be able to fix the indentation error in your code and get it working correctly.