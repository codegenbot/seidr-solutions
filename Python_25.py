def factorize(n):
    factors = []
    for i in range(2, n + 1):
        while n % i == 0:
            factors.append(i)
            n //= i
    return factors


def main(user_input):
    result = [factorize(n) for n in user_input]
    output = " ".join(str(f) for sublist in result for f in sublist)
    return output.strip()


user_input = list(map(int, input().strip().split()))
print(main(user_input))