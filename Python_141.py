```
def file_name_check(file_name):
    if not file_name:
        return 'No'
    parts = file_name.split('.')
    if len(parts) != 2:
        return 'No'
    part1 = parts[0]
    part2 = parts[1].lower()
    if not part1 or not part1[0].isalpha():
        return 'No'
    if not set('0123456789').issubset(set(part1)) and len([c for c in part1 if c.isdigit()]) > 3:
        return 'No'
    if part2 not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'