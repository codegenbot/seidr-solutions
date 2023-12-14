
<<REPL>>
import sys
def coin_sums(cents):
    """
    :param cents: int
    :return: list of int
    """
    return None

if __name__ == "__main__":
    # DO NOT MODIFY CODE HERE
    inputs = sys.stdin.readlines()
    input_line, output_line = 0, 1
    num_testcases = int(inputs[input_line])
    input_line += 1
    for test in range(num_testcases):
        cents = int(inputs[input_line])
        input_line += 1
        coins = coin_sums(cents)
        print(" ".join([str(coin) for coin in coins]))
<<REPL>>
