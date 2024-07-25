mem = {0: 0, 1: 1}
def fibonacci(num):
    if num in mem:
        return mem[num]
    mem[num] = fibonacci(num - 1) + fibonacci(num - 2)
    return mem[num]

def check():
    num = int(input())
    result = fibonacci(num)
    print(result)

check()