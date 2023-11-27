int compare_one(int a, int b) {
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    } else {
        return -1; // indicates equality
    }
}

float compare_one(float a, float b) {
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    } else {
        return -1.0; // indicates equality
    }
}

std::string compare_one(const std::string& a, const std::string& b) {
    float floatA, floatB;
    try {
        floatA = std::stof(a);
        floatB = std::stof(b);
    } catch (const std::invalid_argument&) {
        return "None";
    } catch (const std::out_of_range&) {
        return "None";
    }
    
    if (floatA > floatB) {
        return a;
    } else if (floatA < floatB) {
        return b;
    } else {
        return "None";
    }
}