```
def file_name_check(file_name):
    if not file_name or '.' not in file_name:
        return 'No'
    name, extension = file_name.split('.')
    if len(name) > 0 and name[0].isalpha():
        for char in name[1:]:
            if char.isdigit() and char not in ['0', '1', '2']:
                return 'No'
        if extension.lower() in ['txt', 'exe', 'dll']:
            return 'Yes'
    return 'No'