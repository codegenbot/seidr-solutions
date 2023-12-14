
<<REPL>>
# Write your code here
<<CTX;1>>
#!/usr/bin/env python3
import sys
def main():
    n = int(input())
    arr = list(map(int, input().split()))
    if len(arr) != 16:
        print("Invalid Input")
        return
    sum_ = 0
    for i in range(len(arr)):
        if (i + 1) % 2 == 0:
            arr[i] *= 2
            if arr[i] > 9:
                arr[i] -= 9
        sum_ += arr[i]
    print(sum_)
if __name__ == "__main__":
    main()
<<<CTX>>
