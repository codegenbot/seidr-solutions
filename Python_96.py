def count_up_to(n):
    if n > 100:
        return []
    prime_numbers = []
    for i in range(2, n+1):
        if is_prime(i):
            prime_numbers.append(i)
    return prime_numbers
```

To fix the code, you can try the following:

1. Check the indentation and make sure it is correct. The `if` statement should be indented correctly within the `for` loop.
2. Make sure that the `is_prime()` function is defined before it is called in the `count_up_to()` function. If it is not defined, you will need to define it or import it from a module where it is defined.
3. Check the arguments being passed to the `append` method call. Make sure that the variable `i` is an integer and that it is within the range of the `for` loop.
4. If the issue persists, try adding parentheses around the argument in the `append` method call. This can help Python interpret the code correctly.

By following these steps, you should be able to fix the SyntaxError and make the program run correctly.