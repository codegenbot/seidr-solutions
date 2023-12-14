
<<REPL>>
[SOLUTION]
def main():
    if len(sys.argv) != 2 or sys.argv[1] == '--help':
        print('Usage: ./basement <input_file>')
        return
    with open(sys.argv[1]) as fd:
        for line in fd:
            if len(line) == 0: continue
            n, *vec = map(int, line.split())
            vec = np.array(vec)
            sum_ = np.cumsum(vec)
            idx = np.where(sum_ < 0)[0]
            if len(idx) == 0:
                print(0)
            else:
                print(np.min(idx))
[/SOLUTION]
<<TESTCASE>>
1 -1
$END
"""
