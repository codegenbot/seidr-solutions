```
def find_zero(xs):
   x = int(input("Enter a number: "))
    try:
        i = xs.index(x)
    except ValueError:
        print("No zero found")
        return None
    
    return f"The first occurrence of {x} is at index {i}"
```