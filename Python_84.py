```
def solve():
    N = int(input("Enter a number: "))
    base_from = int(input("Enter the base of the number (2-36): "))
    base_to = int(input("Enter the target base (2-36): "))

    if N < 2:
        return str(N) * N

    else:
        num_in_base_N = convert_base(N, base_from)
        result_in_target_base = convert_base(num_in_base_N, base_to)

        return f"{N} in base {base_from} is {result_in_target_base} in base {base_to}"

def convert_base(n, base):
    conv_string = "0123456789abcdefghijklmnopqrstuvwxyz"
    if n < base:
        return str(conv_string[n])
    else:
        return convert_base(n // base, base) + conv_string[n % base]

print(solve())