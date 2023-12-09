```
def eat(number, need):
    total_eaten = number + need
    carrots_left = max(0, remaining - need)
    return [total_eaten, carrots_left]
```
```
def main():
    number = int(input("Enter the number of carrots you want to eat: "))
    need = int(input("Enter the number of carrots you need to eat: "))
    total_eaten, carrots_left = eat(number, need)
    print(f"You ate {total_eaten} carrots and have {carrots_left} left.")
```