
def fizz_buzz(n):
    mapping = {3: "Fizz", 5: "Buzz", 15: "FizzBuzz"}
    count = 0
    for i in range(1, n + 1):
        if str(i).find("7") != -1 or (i % 3 == 0 and i % 5 == 0):
            count += 1
    return count