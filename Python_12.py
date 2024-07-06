from typing import List, Optional

from typing import List, Optional

    if not strings:
        return None
    max_len = 0
    result = ''
    for s in strings:
        if not s.isalnum():
            continue
        if len(s) > max_len:
            max_len = len(s)
            result = s
    return result