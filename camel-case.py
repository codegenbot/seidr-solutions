
<<REPL>>
import re
def camel_case(s):
    return s[0] + s[1:].replace('-', ' ').title().replace(' ', '')
if __name__ == "__main__":
    for i in sys.stdin:
        print(camel_case(i))
<<REPL>>
