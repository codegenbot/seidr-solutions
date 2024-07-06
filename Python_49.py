```
def check(func):
    return func(5, 2)

def main():
    print(check(lambda x, y: x % y))

main()