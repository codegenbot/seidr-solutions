
<<REPL>>
<<<REPL>>>
import re
def camel_case(s):
    return ''.join([i[0].upper() + i[1:] for i in s.split('-')])

print(camel_case(input()))
