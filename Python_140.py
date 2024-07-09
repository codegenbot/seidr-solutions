import re
import sys

def fix_spaces():
    text = sys.stdin.readline().strip()
    return re.sub(r"\s{2,}", "-", text.replace(" ", "_"))